// sub_0809BD7C at 0x0809BD7C (thumb)

undefined4 sub_0809BD7C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_24 [4];
  byte abStack_14 [4];
  
  local_24[0] = 0xa70e;
  local_24[1] = 0xa70e;
  local_24[2] = 0xa713;
  local_24[3] = 0xa713;
  sub_08128B5C(abStack_14,&DAT_081295b0,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(local_24 + bVar1));
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)(*(char *)(param_1 + 0x71) * 4 + (&DAT_0885de08)[abStack_14[bVar1]]));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809C04C(param_1);
  }
  return in_lr;
}

