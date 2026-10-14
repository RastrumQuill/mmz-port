// sub_08024618 at 0x08024618 (thumb)

undefined8 sub_08024618(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1e) != 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    uVar3 = *(undefined *)(param_1 + 0x176);
LAB_08024710:
    *(undefined *)(param_1 + 0x17a) = uVar3;
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    uVar4 = 7;
    goto LAB_08024892;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x400) != 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = bVar1 & 0x1e;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    uVar4 = 5;
    goto LAB_08024892;
  }
  *(undefined *)(param_1 + 0x4d) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  if (bVar1 != 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    uVar3 = *(undefined *)(param_1 + 0x176);
    goto LAB_08024710;
  }
  if (((*(byte *)(param_1 + 0x196) & 0x20) != 0) &&
     (iVar5 = sub_08032DC0(param_1,*(undefined4 *)(param_1 + 0xd8)), iVar5 != 0)) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    *(undefined2 *)(param_1 + 0xea) = 0;
    uVar4 = 1;
    goto LAB_08024892;
  }
  if (*(byte *)(param_1 + 0xe) < 2) {
    if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08024820:
      uVar4 = 0x200;
    }
    else {
      uVar2 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar2 = DAT_0202ec36;
      }
      if ((uVar2 & 0x8000) != 0) goto LAB_08024820;
      uVar4 = 0x280;
    }
    iVar5 = sub_08032CC0(param_1,*(undefined4 *)(param_1 + 0xd8),uVar4);
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      uVar4 = 1;
      goto LAB_08024892;
    }
  }
  uVar4 = 2;
LAB_08024892:
  return CONCAT44(in_lr,uVar4);
}

