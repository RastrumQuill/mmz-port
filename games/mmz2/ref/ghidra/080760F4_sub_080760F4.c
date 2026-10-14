// sub_080760F4 at 0x080760F4 (thumb)

undefined4 sub_080760F4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined uVar5;
  undefined4 in_lr;
  
  uVar4 = *(uint *)(param_1 + 0x8c);
  if ((uVar4 & 0x200) != 0) {
    if ((uVar4 & 0x10000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      if ((uVar4 & 0x8000) != 0) {
        uVar5 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_0807620a;
  }
  iVar3 = sub_08065A24(param_1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833fa64 + (uint)*(byte *)(param_1 + 0xb9) * 0x30);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080761b8:
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
      sVar2 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
      if (sVar2 == 0xf) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
LAB_0807620a:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        sub_08076264(param_1);
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 0xd);
      if (((bVar1 < 2) || ((4 < bVar1 && (bVar1 != 6)))) &&
         (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800),
         sVar2 == 0)) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_0807624a;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
      iVar3 = sub_0801E11C(0,param_1,&DAT_0833fa5c);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 == 0) {
        if (*(char *)(param_1 + 0xd) == '\x06') goto LAB_080761b8;
        uVar5 = 4;
      }
      else {
        uVar5 = 7;
      }
      *(undefined *)(param_1 + 0xd) = uVar5;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_080761b8;
    }
  }
  iVar3 = sub_0801E4D8(iVar3);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0807624a:
  sub_080EF118(param_1,*(undefined4 *)(&UNK_0833fa30 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

