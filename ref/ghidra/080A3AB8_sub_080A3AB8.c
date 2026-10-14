// sub_080A3AB8 at 0x080A3AB8 (thumb)

undefined4 sub_080A3AB8(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b5cf4);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_0809C980(param_1);
  uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (0x1000 < uVar2) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar5 = iVar4 - *(int *)(DAT_0202286c + 0x4c);
  if (iVar5 < 0) {
    iVar5 = *(int *)(DAT_0202286c + 0x4c) - iVar4;
  }
  if (iVar5 < 0x1800) {
    uVar1 = 4;
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    uVar3 = sub_08008360(iVar4,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    if (*(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c)) {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar5 = sub_08008360(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
      iVar5 = iVar5 - *(int *)(param_1 + 0x50);
      iVar4 = (*(byte *)(param_1 + 0x12) & 7) * -0x10 + 0x140;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      iVar5 = sub_08008360(*(int *)(param_1 + 0x4c) + -0x800,*(undefined4 *)(param_1 + 0x50));
      iVar5 = iVar5 - *(int *)(param_1 + 0x50);
      iVar4 = (*(byte *)(param_1 + 0x12) & 7) * 0x10 + -0x140;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    if (iVar5 < -0x2c00) {
      sub_0809C930(param_1,1);
      sub_0809C980(param_1);
      return in_lr;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    if (iVar5 < -0x1000) {
      uVar1 = 3;
    }
    else {
      if (iVar5 < 0x1001) {
        return in_lr;
      }
      uVar1 = 5;
    }
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

