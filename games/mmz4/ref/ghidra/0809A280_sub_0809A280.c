// sub_0809A280 at 0x0809A280 (thumb)

undefined4 sub_0809A280(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    if (*(int *)(param_1 + 0xb8) < iVar1) {
      iVar1 = param_1 + 0x54;
      sub_08099B6C(iVar1,2,0,0);
      sub_08099B6C(iVar1,2,1,0);
      sub_08099B6C(iVar1,2,2,0);
      sub_08099B6C(iVar1,2,3,1);
      sub_08099B6C(iVar1,2,4,1);
      sub_08099B6C(iVar1,2,5,1);
      sub_0801CF00(param_1,0x6001);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08099CF4(param_1);
  }
  return in_lr;
}

