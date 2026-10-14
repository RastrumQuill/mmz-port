// sub_080C47D4 at 0x080C47D4 (thumb)

undefined4 sub_080C47D4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x8900);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c47f0_caseD_1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_080127E4(param_1,0x8901);
      iVar2 = sub_08006B84(DAT_0202f088);
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x25) = 0x1e;
        *(undefined *)(iVar2 + 9) = 5;
        *(undefined4 *)(iVar2 + 0x14) = 0x80c22d1;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        *(undefined *)(iVar2 + 0x22) = 0;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
        *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
        *(undefined *)(iVar2 + 0x10) = 0x16;
        *(int *)(iVar2 + 0x28) = param_1;
      }
      uVar4 = 0;
      do {
        iVar2 = sub_08006B84(DAT_0202f088);
        if (iVar2 != 0) {
          *(undefined *)(iVar2 + 0x25) = 0x1e;
          *(undefined *)(iVar2 + 9) = 5;
          *(undefined4 *)(iVar2 + 0x14) = 0x80c22d1;
          *(undefined2 *)(iVar2 + 0x20) = 0;
          *(undefined *)(iVar2 + 0x22) = 0;
          *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
          *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
          *(undefined *)(iVar2 + 0x10) = 0x14;
          *(char *)(iVar2 + 0x11) = (char)uVar4;
          *(int *)(iVar2 + 0x28) = param_1;
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 2);
      uVar4 = 0;
      do {
        iVar2 = sub_08006B84(DAT_0202f088);
        if (iVar2 != 0) {
          *(undefined *)(iVar2 + 0x25) = 0x1e;
          *(undefined *)(iVar2 + 9) = 5;
          *(undefined4 *)(iVar2 + 0x14) = 0x80c22d1;
          *(undefined2 *)(iVar2 + 0x20) = 0;
          *(undefined *)(iVar2 + 0x22) = 0;
          *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
          *(undefined *)(iVar2 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
          *(undefined *)(iVar2 + 0x10) = 0x15;
          *(char *)(iVar2 + 0x11) = (char)uVar4;
          *(int *)(iVar2 + 0x28) = param_1;
        }
        uVar3 = uVar4 * 0x10000 + 0x10000;
        uVar4 = uVar3 >> 0x10;
      } while ((int)uVar3 >> 0x10 < 8);
      *(undefined *)(param_1 + 0x12) = 0x78;
LAB_080c49ac:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_080c47f0_caseD_5:
    return in_lr;
  case 1:
    goto switchD_080c47f0_caseD_1;
  case 2:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + ((uVar4 * 0x10 >> 0x14) - 0x800);
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      local_20 = *(int *)(param_1 + 0x58) - (uVar4 * 4 >> 0x12);
      sub_080AC60C(1,&local_24);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_080c49ac;
  case 4:
    sub_080128D4(param_1);
  default:
    goto switchD_080c47f0_caseD_5;
  }
}

