// sub_0805B0A8 at 0x0805B0A8 (thumb)

undefined4 sub_0805B0A8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    *(undefined *)(param_1 + 0xc1) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082afd68);
    sub_080033F0(param_1 + 0x6c,5);
    uVar4 = 0x100;
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar4 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar2 = sub_080C8AD0((int)*(short *)(param_1 + 0x8c),3);
      uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar5 & 0x7fffffff;
      if ((uVar5 * 2 >> 0x11 & 0xf) < (uint)(byte)(&DAT_082afec4)[uVar2 & 0xff]) {
        sub_0805985C(param_1);
      }
      else {
        *(undefined *)(param_1 + 0xd) = 9;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      sub_0805985C(param_1);
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x54) * 0xe6;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  sub_080599B0(param_1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

