// sub_08110C10 at 0x08110C10 (thumb)

undefined4 sub_08110C10(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    DAT_02000a40 = 0x3f82;
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x4f00;
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    *(undefined *)(param_1 + 0x256) = 0;
    *(undefined2 *)(param_1 + 8) = 0x4b0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  if (*(short *)(param_1 + 8) != 0) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
  }
  sub_080025D8(0x89);
  uVar3 = ~(uint)*(ushort *)(param_1 + 8) & 0x3f;
  if (uVar3 < 0x18) {
    iVar2 = FUN_081288bc(uVar3 << 7,0x18);
    DAT_02000a44 = (undefined2)
                   (*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17)) * 3 >> 6);
  }
  else {
    DAT_02000a44 = 0;
  }
  pcVar4 = (char *)(param_1 + 0x256);
  if (*pcVar4 == '\0') {
    if ((DAT_02000764 & 8) != 0) {
      sub_08002B10(2);
      *(undefined *)(param_1 + 6) = 3;
      *(undefined *)(param_1 + 7) = 0;
      return in_lr;
    }
    if (*(short *)(param_1 + 8) == 0) {
      *pcVar4 = ' ';
    }
    if (*pcVar4 == '\0') {
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + 0x256);
  DAT_03002ec2 = cVar1 + -1;
  *(char *)(param_1 + 0x256) = DAT_03002ec2;
  DAT_03002ec0 = cVar1 + -1;
  DAT_03002ec1 = DAT_03002ec0;
  if (DAT_03002ec2 == '\0') {
    *(undefined *)(param_1 + 0x254) = 4;
    *(undefined *)(param_1 + 5) = 3;
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

