// sub_08080368 at 0x08080368 (thumb)

undefined4 sub_08080368(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) == 0) || (1 < (byte)(*(char *)(param_1 + 0xd) - 1U))) {
LAB_08080400:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08080420;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x97) & 0xf0;
    if (bVar3 == 0x20) {
      if (*(char *)(param_1 + 0xb9) == '\0') {
        *(undefined *)(param_1 + 0x11) = 0;
        cVar4 = '\0';
LAB_080803de:
        *(undefined *)(param_1 + 0xd) = 3;
        *(char *)(param_1 + 0xe) = cVar4;
      }
    }
    else if (bVar3 == 0x30) {
      if (*(char *)(param_1 + 0xb9) == '\0') {
        *(undefined *)(param_1 + 0x11) = 1;
        cVar4 = '\0';
        goto LAB_080803de;
      }
    }
    else if (bVar3 == 0x10) {
      if (*(char *)(param_1 + 0xb9) == '\0') {
        *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
        *(char *)(param_1 + 0xb9) = '\x01';
      }
    }
    else {
      cVar4 = *(char *)(param_1 + 0xb9);
      if (cVar4 == '\0') goto LAB_080803de;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = sub_0801E11C(0,param_1,&DAT_08340b6c);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      sub_08006E08(param_1 + 0x74,&DAT_08340ba4);
      goto LAB_08080400;
    }
  }
  iVar2 = sub_0801E4D8();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_08340b74);
  }
LAB_08080420:
  if (*(char *)(param_1 + 0xd) == '\x01') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(param_1 + 0x54) < 0x44801) {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else if (0xcebff < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if (*(char *)(param_1 + 0xb9) == '\0') {
    sub_080EF118(param_1,*(undefined4 *)(&UNK_08340b4c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    sub_080808F0(param_1);
  }
  return in_lr;
}

