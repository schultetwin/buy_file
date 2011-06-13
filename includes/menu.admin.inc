<?php

/**
 * Create admin form
 */
function buy_file_admin_form($form_state) {
  $form = array();
  $form['file_cost'] = array(
    '#type' => 'textfield',
    '#title' => t('Default Cost for File Download'),
    '#required' => TRUE,
    '#default_value' => variable_get('file_cost',0),
    '#field_prefix' => '$',
    '#size' => 4,
  );
  $form['buy_file_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Default Number of Downloads'),
    '#default_value' => variable_get('buy_file_number',1),
    '#size' => 2,
  );
  $form['buy_file_file_directory'] = array(
    '#type' => 'textfield',
    '#title' => t('Directory of files'),
    '#description' => t('Only files in this directory will be listed as purchasable. If not set, all files will
    purchusable. If private downloads is enabled, we will default to that direcotory. Please not that this does
    not protect that directory.'),
    '#default_value' => variable_get('buy_file_file_directory',''),
  );
  $form['thank_you_messages'] = array(
    '#type' => 'fieldset',
    '#title' => t('Thank You Messages'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['thank_you_messages']['buy_file_thank_you'] = array(
    '#type' => 'textarea',
    '#title' => t('Thank You'),
    '#description' => t('Create message to thank your buyer'),
    '#default_value' => variable_get('buy_file_thank_you',t('Thank you for buying from us')),
  );
  $form['error_messages'] = array(
    '#type' => 'fieldset',
    '#title' => t('Warning and Error Messages'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['error_messages']['buy_file_repurchase'] = array(
    '#type' => 'textarea',
    '#title' => t('Re-Purchase Notification'),
    '#description' => t('If a user has paid for a file, but not yet downloaded it,
    this error will show, along with a link to download the file'),
    '#default_value' => variable_get('buy_file_repurchase',t('You have already bought this file, but have not yet downloaded it.')),
  );
  $form['error_messages']['buy_file_has_permission'] = array(
    '#type' => 'textarea',
    '#title' => t('Has Permission Notification'),
    '#description' => t('If a user has permission to download all files
    this error will notify them a provide a link to download the file'),
    '#default_value' => variable_get('buy_file_has_permission',t('You have subscribed to our site and may download this file for free.')),
  );
  $form['error_messages']['buy_file_no_purchased_download'] = array(
    '#type' => 'textarea',
    '#title' => t('No Downloads'),
    '#description' => t('If the user page has no downloads'),
    '#default_value' => variable_get('buy_file_no_purchased_download',t('You have no current available downloads')),
  );
  $form['#validate'][] = 'buy_file_price_validate';
  return system_settings_form($form);
}

function buy_file_form_buy_file_admin_form_alter($form, &$form_state) {
  if (module_exists('private_download')) {
    $dir = variable_get('buy_file_file_directory','');
    if (!$dir) {
      $form['buy_file_file_directory']['#default_value'] = variable_get('private_download_directory', 'private');
    }
  }
}
function buy_file_price_validate($form, &$form_state) {
  if ($form_state['values']['file_cost'] < 0 || $form_state['values']['file_cost'] > 9999) {
    form_set_error('file_cost', t('You much set a price between 0 and 9999'));
  }
  $dir = file_directory_path() .'/'. $form_state['values']['buy_file_file_directory'];
  file_check_directory($dir,FILE_CREATE_DIRECTORY,'buy_file_file_directory');
}
