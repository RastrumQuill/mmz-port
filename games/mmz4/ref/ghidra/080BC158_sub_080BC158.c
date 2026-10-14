// sub_080BC158 at 0x080BC158 (thumb)

undefined4 sub_080BC158(int param_1)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb4) == '\x01') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080BC270(param_1);
  }
  else {
    iVar3 = sub_0807F8CC(param_1);
    if ((iVar3 == 0) || (*(int *)(param_1 + 0xb8) <= *(int *)(DAT_0202dbf0 + 0x58))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0xb5) = uVar1;
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar3 + 0xe00);
      if (sVar2 != 0) {
        iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = iVar3 + -0xe00;
        *(int *)(param_1 + 0xb8) = iVar3 + -0xe00;
        *(char *)(param_1 + 0xb4) = '\x01';
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08005760(param_1 + 0x74,&DAT_08861224,param_1 + 0x54,1);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(char *)(param_1 + 0x11) == '\x01') {
          *(undefined *)(param_1 + 0x12) = 0x40;
          sub_0801CF00(param_1,0xe908);
        }
      }
    }
    else if (*(char *)(param_1 + 0x11) == '\x01') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      }
      else {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      }
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

