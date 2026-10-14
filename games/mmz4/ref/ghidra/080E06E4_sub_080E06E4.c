// sub_080E06E4 at 0x080E06E4 (thumb)

undefined4 sub_080E06E4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_0801CF00(param_1,0x7504);
    *(undefined *)(param_1 + 0x12) = 10;
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080E0894(param_1);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

