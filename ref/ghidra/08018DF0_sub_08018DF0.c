// sub_08018DF0 at 0x08018DF0 (thumb)

undefined4 sub_08018DF0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x128) & 0x43) == 0) {
    sub_0800561C(param_1 + 0x74,*(undefined4 *)(param_1 + 0x104));
  }
  else {
    sub_0800561C(param_1 + 0x74,&DAT_082a8420);
  }
  return in_lr;
}

