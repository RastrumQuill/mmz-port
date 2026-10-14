// sub_080804D8 at 0x080804D8 (thumb)

undefined4 sub_080804D8(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08340c04 + (uint)*(byte *)(param_1 + 0x11) * 10));
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + -0x5fa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar4 = *(int *)(DAT_0202e130 + 0x54);
      iVar2 = *(int *)(param_1 + 100);
      if ((iVar2 <= iVar4) && (iVar4 <= iVar2 + 0x5000)) {
LAB_080805fc:
        *(int *)(param_1 + 0x54) = iVar2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        goto LAB_08080604;
      }
      if (*(int *)(param_1 + 0x54) < iVar2) {
        *(int *)(param_1 + 0x54) = iVar4 + -0x5000;
      }
      if (0x44800 < *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    else {
      iVar4 = *(int *)(DAT_0202e130 + 0x54);
      iVar2 = *(int *)(param_1 + 100);
      if ((iVar4 <= iVar2) && (iVar2 + -0x5000 <= iVar4)) goto LAB_080805fc;
      if (iVar2 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = iVar4 + 0x5000;
      }
      if (*(int *)(param_1 + 0x54) < 0xcec00) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
LAB_08080604:
    cVar1 = *(char *)(param_1 + 0x12);
    cVar3 = cVar1 + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb4) +
         (short)(&DAT_080ef450)[0xff - *(byte *)(param_1 + 0x12) & 0xff] * 0x60;
    if (cVar1 == '\x01') {
      sub_08006E08(param_1 + 0x74,&DAT_08340b74);
      *(undefined *)(param_1 + 0xd) = 1;
      *(char *)(param_1 + 0xe) = cVar3;
    }
  }
  return in_lr;
}

