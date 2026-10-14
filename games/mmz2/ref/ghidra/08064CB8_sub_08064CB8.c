// sub_08064CB8 at 0x08064CB8 (thumb)

undefined4 sub_08064CB8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = sub_080AB834(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080032EC(0xd6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '1') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = *(int *)(param_1 + 0x54) + -0x2000;
    }
    else {
      local_18 = *(int *)(param_1 + 0x54) + 0x2000;
    }
    local_14 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      sub_08002638(&DAT_08433638,(DAT_0202e67c - 0x200) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08433644,(DAT_0202e47c - 8) * 0x20 + 0x200);
      uVar2 = sub_0808D62C(local_18,local_14,~(*(byte *)(param_1 + 10) >> 4) & 1);
    }
    else {
      sub_08002638(&DAT_08432db4,(DAT_0202e5a2 - 0x200) * 0x20 + 0x10000);
      sub_08002AEC(&DAT_08432dc0,(DAT_0202e3a2 - 8) * 0x20 + 0x200);
      uVar2 = sub_08066834(&local_18,0,0);
    }
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

