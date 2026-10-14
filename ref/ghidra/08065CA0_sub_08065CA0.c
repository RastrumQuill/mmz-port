// sub_08065CA0 at 0x08065CA0 (thumb)

undefined4 sub_08065CA0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  iVar6 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 0xd) < 4) && (*(char *)(iVar6 + 0xd) == '\x16')) {
    *(undefined *)(param_1 + 0xd) = 4;
    if (*(int *)(iVar6 + 0x4c) < *(int *)(param_1 + 0x4c)) {
      *(undefined4 *)(param_1 + 0x54) = 0x300;
      uVar2 = 0xc0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffd00;
      uVar2 = 0x40;
    }
    *(undefined *)(param_1 + 0x13) = uVar2;
    *(undefined4 *)(param_1 + 0x58) = 0x20;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar4 = *(byte *)(param_1 + 0x13) + 0x40 & 0xff;
    iVar5 = *(int *)(param_1 + 0x54);
    iVar6 = iVar5 * (short)(&DAT_080c8e24)[uVar4 + 0x40];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (iVar6 >> 8);
    iVar6 = iVar5 * (short)(&DAT_080c8e24)[uVar4];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (iVar6 >> 8);
    *(int *)(param_1 + 0x54) = iVar5 + -0x10;
    if (iVar5 + -0x10 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined4 *)(param_1 + 0x58) = 0x20;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x58) == 0x20) {
      local_14 = *(int *)(param_1 + 0x4c) +
                 (short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x13) + 0x40 & 0xff) + 0x40] * 8;
      local_10 = *(int *)(param_1 + 0x50) +
                 (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff] * 8;
      sub_08064D10(&local_14,param_1);
      sub_0800561C(param_1 + 0x74,&DAT_082b0a28);
    }
    iVar6 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar6 + -1;
    if (iVar6 == 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      sub_0800561C(param_1 + 0x74,&DAT_082b0a44);
    }
    break;
  case 2:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    else {
      uVar4 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x10 >> 0x10
                           ,(*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x10 >>
                            0x10);
      uVar2 = (undefined)((uVar4 & 0xffff) + 0xc000 >> 8);
      *(undefined *)(param_1 + 0x13) = uVar2;
      *(undefined *)(param_1 + 0x1f) = uVar2;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0x300;
    }
    break;
  case 3:
    *(undefined *)(param_1 + 0x1f) = 0x80;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x300;
    iVar6 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (iVar6 == 0) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
    goto LAB_08065eb4;
  case 4:
    *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar6 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (iVar6 == 0) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
LAB_08065eb4:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)bVar1 * 4) + 8)
    ;
  }
  return in_lr;
}

