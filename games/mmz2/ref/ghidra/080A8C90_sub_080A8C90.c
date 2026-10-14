// sub_080A8C90 at 0x080A8C90 (thumb)

undefined4 sub_080A8C90(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar3 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
      iVar5 = *(int *)(DAT_0202e130 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000) >> 8;
      iVar2 = sub_080EEF7C(iVar3 * iVar3 + iVar5 * iVar5);
      uVar4 = (uint)(iVar2 << 0x10) >> 8;
      if (uVar4 == 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x200;
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      else {
        iVar2 = sub_080EF150(iVar3 << 0x10,uVar4);
        iVar3 = sub_080EF150(iVar5 << 0x10,uVar4);
        *(int *)(param_1 + 0x5c) = iVar2 << 1;
        *(int *)(param_1 + 0x60) = iVar3 << 1;
      }
      *(undefined *)(param_1 + 0x12) = 0xc0;
      sub_080127E4(param_1,0x6b0d);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    sVar1 = sub_08008CFC();
    if (((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
       (((sVar1 != 0 && (sVar1 != -0x7ff1)) || (*(char *)(param_1 + 0x12) == '\0')))) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080128D4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

