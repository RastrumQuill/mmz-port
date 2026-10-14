// sub_0807A5BC at 0x0807A5BC (thumb)

undefined4 sub_0807A5BC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
      *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar4 + 0x1c);
      if (*(byte *)(param_1 + 0x12) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar3 = *(byte *)(param_1 + 0x12) & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      sub_08017700(param_1,*(undefined2 *)(&DAT_08363f10 + (uint)*(byte *)(param_1 + 0x13) * 2));
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    if (*(byte *)(iVar4 + 0xb4) == *(byte *)(param_1 + 0x13)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*(byte *)(param_1 + 0x13) < *(byte *)(iVar4 + 0xb4)) {
      uVar2 = 0x19;
    }
    else {
      uVar2 = 0x17;
    }
    *(undefined *)(param_1 + 0x25) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    iVar4 = *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x58) =
         iVar4 + *(short *)(&DAT_08363f16 + (uint)*(byte *)(param_1 + 0x13) * 2);
    sub_080177F4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

