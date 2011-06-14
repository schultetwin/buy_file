<?php

function buy_file_views_data() {
  $data = array();
  $data['user_file_download']['table']['group'] = t('User File Downloads');
  /**
  $data['user_file_download']['table']['base'] = array(
    'field' => 'fid',
    'title' => t('File Purchase Table'),
    'help' => t("Table that contains a file id, a user id, and a downloadable option"),
    'weight' => 10,
  );
  */
  
  $data['user_file_download']['table']['join'] = array(
    'files' => array(
      'left_field' => 'fid',
      'field' => 'fid',
    ),
    'users' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
  );
  $data['user_file_download']['fid'] = array(
    'title' => t('File Purchases by fid'),
    'help' => t('File id that references a file'),
    'relationship' => array(
      'base' => 'files',
      'field' => 'fid',
      'handler' => 'views_handler_relationship',
      'label' => t('Buy file file'),
    ),
  );
  $data['user_file_download']['uid'] = array(
    'title' => t('File Purchases by uid'),
    'help' => t('User id that references a user'),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Buy file user'),
    ),
  );
  $data['user_file_download']['downloadable'] = array(
    'title' => t('File Downloadable'),
    'help' => t('Value to see if file is downloadable by user'),
    'field' => array(
      'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Downloadable'),
      'type' => 'yes-no',
    ),
  );
  
  return $data;
}
