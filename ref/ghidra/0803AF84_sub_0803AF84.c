// sub_0803AF84 at 0x0803AF84 (thumb)

undefined4 sub_0803AF84(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029654(param_1);
    sub_0800561C(param_1 + 0x74,&DAT_082adbd0);
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar3 = *(int *)(DAT_0202286c + 0x4c) - iVar6;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(DAT_0202286c + 0x4c) == iVar6 || iVar3 < 0) goto LAB_0803afee;
  }
  else if (0 < iVar3) {
LAB_0803afee:
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      iVar3 = *(int *)(DAT_0202286c + 0x4c) - iVar6;
      if (iVar3 < 0) {
        iVar3 = iVar6 - *(int *)(DAT_0202286c + 0x4c);
      }
LAB_0803b00c:
      do {
        do {
          uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar4 & 0x7fffffff;
          uVar4 = uVar4 * 2 >> 0x11 & 0xf;
          if (iVar3 < 0x5001) {
            puVar5 = &DAT_082add10 + uVar4;
          }
          else if (iVar3 < 0xa001) {
            puVar5 = &DAT_082add20 + uVar4;
          }
          else {
            puVar5 = &DAT_082add30 + uVar4;
          }
          *(undefined *)(param_1 + 0xd) = *puVar5;
          bVar1 = false;
          if ((*(char *)(param_1 + 0xd) == '\v') &&
             ((*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0xc0) + -0x3000 ||
              (*(int *)(param_1 + 0xc4) + 0x3000 < *(int *)(param_1 + 0x4c))))) {
            bVar1 = true;
          }
          if (*(char *)(param_1 + 0xd) == '\x01') {
            sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
            if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
              iVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
              iVar6 = *(int *)(param_1 + 0x4c) - iVar3;
            }
            else {
              iVar3 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
              iVar6 = iVar3 - *(int *)(param_1 + 0x4c);
            }
            if (iVar6 < 0x5000) {
              bVar1 = true;
            }
          }
          if ((*(byte *)(DAT_02022b20 + 1) < 5) && (*(char *)(param_1 + 0xd) == '\t')) {
            bVar1 = true;
          }
        } while (bVar1);
        sub_0803AC88(param_1,*(undefined *)(param_1 + 0xd));
        if (*(char *)(param_1 + 0xd) == '\x03') {
          if (*(byte *)(param_1 + 0xda) != 0) goto LAB_0803b00c;
        }
        else if (1 < *(byte *)(param_1 + 0xda)) {
          bVar1 = true;
        }
      } while (bVar1);
      *(bool *)(param_1 + 0xe) = bVar1;
    }
    goto LAB_0803b118;
  }
  *(undefined *)(param_1 + 0xd) = 0xf;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_0803b118:
  sub_080297C0(param_1);
  return in_lr;
}

