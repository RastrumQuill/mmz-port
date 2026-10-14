// sub_0804EA88 at 0x0804EA88 (thumb)

undefined4 sub_0804EA88(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xffffffe0;
    }
    else {
      uVar1 = 0x20;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (iVar3 < -0x700) {
    *(undefined4 *)(param_1 + 0x54) = 0xfffff900;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (0x580 < iVar3) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + -0x20;
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 < -0x700) {
      *(undefined4 *)(param_1 + 0x58) = 0xfffff900;
    }
  }
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (uVar2 < 0x3001) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

