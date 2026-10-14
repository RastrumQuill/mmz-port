// sub_080A76F0 at 0x080A76F0 (thumb)

undefined4 sub_080A76F0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x60;
        *(undefined *)(param_1 + 0x13) = 0x40;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0x13) = 0x40;
        if (*(byte *)(param_1 + 200) < 2) {
          cVar2 = '\0';
        }
        else {
          do {
            uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
            DAT_02022890 = uVar3 & 0x7fffffff;
            cVar2 = sub_080C8CB0(uVar3 * 2 >> 0x11,3);
          } while (*(char *)(param_1 + 0xc9) == cVar2);
        }
        *(char *)(param_1 + 0xc9) = cVar2;
        iVar4 = *(int *)(param_1 + 0x24);
        if (cVar2 != '\0') {
          if (iVar4 == 0) goto LAB_080a77ee;
          do {
            iVar4 = *(int *)(iVar4 + 0x24);
            cVar2 = cVar2 + -1;
            if (cVar2 == '\0') break;
          } while (iVar4 != 0);
        }
        if ((iVar4 != 0) && (*(char *)(iVar4 + 0x10) == '\x02')) {
          *(undefined *)(iVar4 + 200) = 1;
        }
      }
LAB_080a77ee:
      cVar2 = *(char *)(param_1 + 0x12);
      if (*(byte *)(param_1 + 200) == 0) {
        cVar2 = cVar2 + -1;
      }
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  }
  if ((iVar4 < 0x6000) && (*(char *)(param_1 + 200) == '\0')) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  return in_lr;
}

