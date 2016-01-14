<?php
/**
 * @file
 * inkshop_users_accounts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inkshop_users_accounts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'merkzettel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_wishlist_item';
  $view->human_name = 'Merkzettel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Merkzettel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'commerce_wishlist_item';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Commerce Wishlist Item: Product */
  $handler->display->display_options['relationships']['product_id']['id'] = 'product_id';
  $handler->display->display_options['relationships']['product_id']['table'] = 'commerce_wishlist_item';
  $handler->display->display_options['relationships']['product_id']['field'] = 'product_id';
  $handler->display->display_options['relationships']['product_id']['required'] = TRUE;
  /* Field: Commerce Product: Image */
  $handler->display->display_options['fields']['field_product_image']['id'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['table'] = 'field_data_field_product_image';
  $handler->display->display_options['fields']['field_product_image']['field'] = 'field_product_image';
  $handler->display->display_options['fields']['field_product_image']['relationship'] = 'product_id';
  $handler->display->display_options['fields']['field_product_image']['label'] = 'Bild';
  $handler->display->display_options['fields']['field_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_image']['settings'] = array(
    'image_style' => 'product_list_image',
    'image_link' => '',
  );
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id_1']['id'] = 'product_id_1';
  $handler->display->display_options['fields']['product_id_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id_1']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id_1']['relationship'] = 'product_id';
  $handler->display->display_options['fields']['product_id_1']['label'] = 'Produkt-ID';
  $handler->display->display_options['fields']['product_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id_1']['link_to_product'] = 0;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'product_id';
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['link_to_product'] = 1;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = 'Preis';
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['relationship'] = 'product_id';
  $handler->display->display_options['fields']['sku']['label'] = 'Artikel Nr.';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'product_id';
  /* Field: Commerce Wishlist Item: Added on */
  $handler->display->display_options['fields']['added']['id'] = 'added';
  $handler->display->display_options['fields']['added']['table'] = 'commerce_wishlist_item';
  $handler->display->display_options['fields']['added']['field'] = 'added';
  $handler->display->display_options['fields']['added']['label'] = 'Hinzugefügt am';
  $handler->display->display_options['fields']['added']['date_format'] = 'short';
  $handler->display->display_options['fields']['added']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['added']['format_date_sql'] = 0;
  /* Field: Commerce Wishlist Item: Remove */
  $handler->display->display_options['fields']['remove_wishlist']['id'] = 'remove_wishlist';
  $handler->display->display_options['fields']['remove_wishlist']['table'] = 'commerce_wishlist_item';
  $handler->display->display_options['fields']['remove_wishlist']['field'] = 'remove_wishlist';
  $handler->display->display_options['fields']['remove_wishlist']['label'] = 'Vom Merkzettel entfernen';
  /* Contextual filter: Commerce Wishlist: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'commerce_wishlist';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/merkzettel';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mein Merkzettel';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['merkzettel'] = array(
    t('Master'),
    t('Merkzettel'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Wishlist product display'),
    t('Bild'),
    t('Produkt-ID'),
    t('Titel'),
    t('Preis'),
    t('Artikel Nr.'),
    t('Add to Cart form'),
    t('Hinzugefügt am'),
    t('Vom Merkzettel entfernen'),
    t('Alle'),
    t('Page'),
  );
  $export['merkzettel'] = $view;

  return $export;
}
