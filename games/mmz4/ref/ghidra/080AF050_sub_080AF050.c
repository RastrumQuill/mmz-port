// sub_080AF050 at 0x080AF050 (thumb)

undefined4 sub_080AF050(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    if (*(byte *)(iVar1 + 0xc) < 2) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        sub_080E4558(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      else {
        sub_080E4558(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      }
    }
    else {
      sub_080E4558(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    sub_0802AB70(4,0x11,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

