// sub_0807F47C at 0x0807F47C (thumb)

undefined4 sub_0807F47C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc802);
    sub_08005784(param_1 + 0x74,&DAT_0885a3b8);
    *(undefined *)(param_1 + 0xd5) = *(undefined *)(param_1 + 0xd4);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 2;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc803);
    sub_0801CFF0(param_1);
    sub_080CEA90(param_1,1,0);
    sub_080CEA90(param_1,1,1);
    sub_08005784(param_1 + 0x74,&DAT_0885a388);
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08002B10(0x162);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      *(undefined *)
       (param_1 + 0xd8 + (uint)(byte)(&DAT_0885a5f6)[(uint)*(byte *)(param_1 + 0xd4) * 2]) = 0;
      *(undefined *)
       (param_1 + 0xd8 + (uint)(byte)(&DAT_0885a5f7)[(uint)*(byte *)(param_1 + 0xd4) * 2]) = 0;
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)
     (param_1 + 0xd8 + (uint)(byte)(&DAT_0885a5f6)[(uint)*(byte *)(param_1 + 0xd4) * 2]) = 1;
    *(undefined *)
     (param_1 + 0xd8 + (uint)(byte)(&DAT_0885a5f7)[(uint)*(byte *)(param_1 + 0xd4) * 2]) = 1;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc804);
    sub_0801CFF0(param_1);
    sub_08005784(param_1 + 0x74,&DAT_0885a3b8);
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

