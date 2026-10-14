// sub_08048398 at 0x08048398 (thumb)

undefined4 sub_08048398(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa513);
    sub_08006E08(param_1 + 0x74,&DAT_0833ad6c);
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    uVar5 = sub_0809EA60(param_1,0,0);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    uVar4 = sub_080032EC(0x4e);
    *(undefined2 *)(param_1 + 0xde) = uVar4;
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(char *)(param_1 + 0xbe) = -1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

