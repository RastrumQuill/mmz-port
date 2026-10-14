// sub_080873AC at 0x080873AC (thumb)

undefined4 sub_080873AC(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (*(byte *)(param_1 + 0x12) < 0x81) {
    uVar2 = 0x17;
  }
  else {
    uVar2 = 0x19;
  }
  *(undefined *)(param_1 + 0x25) = uVar2;
  if (*(int *)(param_1 + 0x5c) < 0x20) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  bVar4 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar4 + 1;
  if ((bVar4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 0x12);
    uVar3 = bVar4 + 0x40 & 0xff;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x12);
    uVar3 = (uint)bVar4;
  }
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[uVar3];
  *(byte *)(param_1 + 0x12) = bVar4 + 3;
  cVar1 = *(char *)(iVar5 + 0xd);
  if ((cVar1 == '\x18') || (cVar1 == '\x05')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

