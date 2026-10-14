// sub_080A7A60 at 0x080A7A60 (thumb)

undefined4 sub_080A7A60(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x8d05);
    sub_08005784(param_1 + 0x74,&DAT_0885f218);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0xb4) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 8;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * -8;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 4;
  *(short *)(param_1 + 0xbc) = (&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * -4 + 0x800;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    if (*(char *)(param_1 + 0xbf) == '\0') {
      if (*(char *)(param_1 + 0xc0) == '\0') {
        if (*(char *)(iVar3 + 0xd) != '\x04') {
          return in_lr;
        }
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + (*(int *)(iVar3 + 0x54) - *(int *)(iVar3 + 0xb4));
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + 0x58) + (*(int *)(iVar3 + 0x58) - *(int *)(iVar3 + 0xb8));
        return in_lr;
      }
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

