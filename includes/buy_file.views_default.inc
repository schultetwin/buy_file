<?php

function buy_file_views_default_views() {
  $view = new view;
  $view = new view;
  $view->name = 'user_file_download';
  $view->description = 'List of file downloads available to user';
  $view->tag = 'Buy File';
  $view->view_php = '';
  $view->base_table = 'files';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'uid' => array(
      'label' => 'Buy file user',
      'required' => 0,
      'id' => 'uid',
      'table' => 'user_file_download',
      'field' => 'uid',
      'relationship' => 'none',
    ),
    'fid' => array(
      'label' => 'Buy file file',
      'required' => 0,
      'id' => 'fid',
      'table' => 'user_file_download',
      'field' => 'fid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'filename' => array(
      'label' => 'Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_file' => 0,
      'exclude' => 0,
      'id' => 'filename',
      'table' => 'files',
      'field' => 'filename',
      'relationship' => 'none',
    ),
    'downloadable' => array(
      'label' => 'Downloads Remaining',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'type' => 'yes-no',
      'not' => 0,
      'id' => 'downloadable',
      'table' => 'user_file_download',
      'field' => 'downloadable',
      'relationship' => 'fid',
    ),
    'nothing' => array(
      'label' => 'Price',
      'alter' => array(
        'text' => '$12',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'relationship' => 'none',
    ),
    'filemime' => array(
      'label' => 'Download',
      'alter' => array(
        'alter_text' => 1,
        'text' => 'Download Now',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_file' => 1,
      'exclude' => 0,
      'id' => 'filemime',
      'table' => 'files',
      'field' => 'filemime',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'downloadable' => array(
      'order' => 'DESC',
      'id' => 'downloadable',
      'table' => 'user_file_download',
      'field' => 'downloadable',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'uid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'user',
      'default_argument' => '',
      'validate_type' => 'user',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'validate_user_argument_type' => 'either',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
        '6' => 0,
        '7' => 0,
        '4' => 0,
        '5' => 0,
      ),
      'default_options_div_prefix' => '',
      'default_argument_fixed' => '',
      'default_argument_user' => 0,
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'event' => 0,
        'group' => 0,
        'page' => 0,
        'position' => 0,
        'profile' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => 'OG_VIEWS_DO_NOT_VALIDATE_MEMBERSHIP',
      'validate_argument_group_node_type' => array(
        'group' => 0,
      ),
      'validate_argument_php' => '',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'downloadable' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'downloadable',
        'label' => 'Downloadable',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'downloadable',
      'table' => 'user_file_download',
      'field' => 'downloadable',
      'relationship' => 'fid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'File Downloads');
  $handler->override_option('header', '<p>Thank you for purchasing files from us.</p>
    <p>If you just purchased a file, but Download Now is no, then wait 10 seconds and refresh the page. It is just taking our server a few seconds to process the request. Thank you.</p>
    <p>If you have a subscription you may download any file list here, without paying.</p>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', '<p>You have not bought any files.</p>
      <p>If you just purchased a file, but Download Now is no, then wait 10 seconds and refresh the page. It is just taking our server a few seconds to process the request. Thank you.</p>');
  $handler->override_option('empty_format', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'filename' => 'filename',
      'filepath' => 'filepath',
      'downloadable' => 'downloadable',
    ),
    'info' => array(
      'filename' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'filepath' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'downloadable' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'user/%/downloads');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Downloads',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->override_option('relationships', array(
    'uid' => array(
      'label' => 'Buy file user',
      'required' => 0,
      'id' => 'uid',
      'table' => 'user_file_download',
      'field' => 'uid',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'filename' => array(
      'label' => 'Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_file' => 0,
      'exclude' => 0,
      'id' => 'filename',
      'table' => 'files',
      'field' => 'filename',
      'relationship' => 'none',
    ),
    'nothing' => array(
      'label' => 'Price',
      'alter' => array(
        'text' => '$12',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'nothing',
      'table' => 'views',
      'field' => 'nothing',
      'relationship' => 'none',
    ),
    'filemime' => array(
      'label' => 'Download',
      'alter' => array(
        'alter_text' => 1,
        'text' => 'Download Now',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_file' => 1,
      'exclude' => 0,
      'id' => 'filemime',
      'table' => 'files',
      'field' => 'filemime',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
  ));
  $handler->override_option('arguments', array());
  $handler->override_option('filters', array());
  $handler->override_option('title', 'All Downloads');
  $handler->override_option('header', '<p>Here is a list of all available downloads.</p>');
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', 0);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('inherit_pager', 0);
  $handler->override_option('render_pager', TRUE);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));


  $views[$view->name] = $view;
  
  return $views;
}
