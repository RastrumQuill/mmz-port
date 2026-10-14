// sub_0806D140 at 0x0806D140 (thumb)

undefined4 sub_0806D140(int param_1)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1101);
    sub_08006E08(param_1 + 0x74,&DAT_0833e610);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ('\x05' < *(char *)(param_1 + 0x71)) {
    sub_08006E08(param_1 + 0x74,&DAT_0833e5f8);
  }
  uVar3 = *(uint *)(param_1 + 0x8c) & 1;
  uVar2 = (undefined)uVar3;
  if (uVar3 == 0) {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833e694);
      *(int *)(param_1 + 0xc0) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined2 *)
       (&DAT_0202e020 +
       (*(byte *)(param_1 + 0x10) & 1) * 2 + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4) = 0xbe;
    }
    else {
      (&DAT_0202e020)[(*(byte *)(param_1 + 0x10) & 1) + (uint)(*(byte *)(param_1 + 0x10) >> 1) * 4]
           = 0xbe;
    }
    uVar2 = 0;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(undefined *)(param_1 + 0xe) = uVar2;
  return in_lr;
}

