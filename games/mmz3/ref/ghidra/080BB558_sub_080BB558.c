// sub_080BB558 at 0x080BB558 (thumb)

undefined4 sub_080BB558(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x2802);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar2 = *(int *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar3 = *(int *)(iVar4 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3;
    bVar1 = *(byte *)(iVar4 + 0x24);
    *(int *)(param_1 + 0x54) =
         iVar2 + *(short *)((int)&DAT_080fe64c + ((bVar1 + 0xc0) * 0x1000000 >> 0x17)) * 10;
    *(int *)(param_1 + 0x58) =
         iVar3 + *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x80) * 0x1000000 >> 0x17)) * 10;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

