// sub_080414EC at 0x080414EC (thumb)

undefined4 sub_080414EC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ebbc = DAT_0202ebbc | 4;
    sub_080127E4(param_1,0xa200);
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    goto LAB_080415a6;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xbf) == '\0') {
      piVar4 = (int *)(param_1 + 0xcc);
      iVar3 = *piVar4;
      uVar5 = 0x19;
    }
    else {
      piVar4 = (int *)(param_1 + 200);
      iVar3 = *piVar4;
LAB_08041586:
      uVar5 = 0x1a;
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0xbf) != '\0') {
      piVar4 = (int *)(param_1 + 0xcc);
      iVar3 = *piVar4;
      goto LAB_08041586;
    }
    piVar4 = (int *)(param_1 + 200);
    iVar3 = *piVar4;
    uVar5 = 0x19;
  }
  *(undefined *)(iVar3 + 0xd) = uVar5;
  *(undefined *)(*piVar4 + 0xe) = 0;
  *(undefined *)(piVar4[2] + 0xd) = uVar5;
  *(undefined *)(piVar4[2] + 0xe) = 0;
  *(undefined *)(piVar4[4] + 0xd) = uVar5;
  *(undefined *)(piVar4[4] + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0x40;
LAB_080415a6:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

