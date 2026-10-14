// sub_0802885C at 0x0802885C (thumb)

undefined4 sub_0802885C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  uVar2 = (uint)*(char *)(param_1 + 0x192);
  if (*(char *)(param_1 + 0x17f) == '\x7f') {
    sub_0801E9FC(param_1,0x7e);
  }
  else {
    if (*(char *)(param_1 + 0x17f) != -0x7e) {
      if (uVar2 == 0) {
        uVar2 = 0xffffffff;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          uVar2 = 1;
        }
        sub_0801E9FC(param_1,0x7e);
      }
      else if (-((int)~uVar2 >> 0x1f) == (*(byte *)(param_1 + 10) >> 4 & 1)) {
        sub_0801E9FC(param_1,0x81);
      }
      else {
        sub_0801E9FC(param_1,0x7e);
      }
      goto LAB_080288e8;
    }
    sub_0801E9FC(param_1,0x81);
  }
  if ((uVar2 == 0) && (uVar2 = 0xffffffff, (*(byte *)(param_1 + 10) & 0x10) == 0)) {
    uVar2 = 1;
  }
LAB_080288e8:
  *(bool *)(param_1 + 0x183) = 0 < (int)uVar2;
  bVar1 = *(byte *)(param_1 + 0x202) & 0x20;
  if (((*(byte *)(param_1 + 0x202) & 0x20) == 0) && (*(char *)(param_1 + 0x1fc) != '\x03')) {
    iVar3 = ((int)uVar2 >> 0x1f) * 2 + 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3 * 0x100;
    sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                 *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                 *(byte *)(param_1 + 10) >> 4 & 1,iVar3,1,bVar1,bVar1,1);
  }
  sub_0801E6AC(10);
  sub_08028964(param_1);
  return in_lr;
}

