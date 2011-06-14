<?php

function buy_file_views_data() {
  $data['user_file_download']['table']['group'] = t('User File Downloads');
  
  $data['user_file_download']['table']['join'] = array(
    'files' => array(
      'left_field' => 'fid',
      'field' => 'fid',
    ),
  );
  $data['user_file_download']['fid'] = array(
    'title' => t('File'),
    'help' => t('The file a user bought'),
    'relationship' => array(
      'base' => 'files',
      'field' => 'fid',
      'handler' => 'views_handler_relationship',
      'label' => t('Buy file file'),
    ),
  );
  $data['user_file_download']['uid'] = array(
    'title' => t('User'),
    'help' => t('The user who bought the file'),
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
      'handler' => 'views_handler_field_numeric',
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
