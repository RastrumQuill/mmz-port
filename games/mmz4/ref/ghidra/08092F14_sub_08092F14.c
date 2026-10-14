// sub_08092F14 at 0x08092F14 (thumb)

undefined4 sub_08092F14(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  puVar5 = (uint *)(param_1 + 0x8c);
  if ((*puVar5 & 1) != 0) {
    sub_08006984(0x39);
  }
  if ((*puVar5 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xb9) == '\0') {
      if ((*puVar5 & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
LAB_08092fb8:
    sub_08093DCC(param_1);
    return in_lr;
  }
  iVar3 = sub_080944D4(param_1);
  if (((iVar3 != 0) && (*(char *)(param_1 + 0xd) != '\t')) && (*(char *)(param_1 + 0xd) != '\n')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    goto LAB_08092fb8;
  }
  if ((cVar1 == '\x01') && (uVar4 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0xf000 < uVar4)) {
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
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0809306c:
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) goto LAB_08093080;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 0) {
      iVar3 = sub_0802AD94(0,param_1,&DAT_0885d0b8);
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 == 0) {
        bVar2 = *(byte *)(param_1 + 0xd);
        if ((bVar2 != 6) && (((bVar2 < 6 || (9 < bVar2)) || (bVar2 < 8)))) {
          *(undefined *)(param_1 + 0xd) = 6;
          *(undefined *)(param_1 + 0xe) = 0;
          *(undefined *)(param_1 + 0xf) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      goto LAB_0809306c;
    }
  }
  iVar3 = sub_0802B3CC(iVar3);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08093080:
  sub_08128884(param_1,*(undefined4 *)(&UNK_0885cfb8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08128884(param_1,*(undefined4 *)(&UNK_0885cfe4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

