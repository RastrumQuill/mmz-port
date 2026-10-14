// sub_08039670 at 0x08039670 (thumb)

undefined4 sub_08039670(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  sbyte asStack_18 [8];
  
  sub_080C8D70(asStack_18,&DAT_080c9274,8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x1f;
    *(undefined *)(param_1 + 0xdb) = 0;
    uVar2 = sub_08001EAC(0x90);
    *(undefined2 *)(param_1 + 0xc2) = uVar2;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar3 = (byte *)(param_1 + 0xda);
    *pbVar3 = *pbVar3 + 1;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08001EE8((int)*(short *)(param_1 + 0xc2));
      *(short *)(param_1 + 0xc2) = -1;
      if (((int)(uint)*(ushort *)(param_1 + 0xd8) >> asStack_18[*pbVar3 >> 5] & 1U) == 0) {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      else {
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
  }
  else if (*(char *)(param_1 + 0xdb) != '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

