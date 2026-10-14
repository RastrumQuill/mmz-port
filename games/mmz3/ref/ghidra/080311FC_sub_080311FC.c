// sub_080311FC at 0x080311FC (thumb)

undefined4 sub_080311FC(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((*(uint *)(param_1 + 0x218) & 0x10) != 0) {
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if ((*(uint *)(param_1 + 0x218) & 0x20) != 0) {
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  iVar2 = sub_080343B0(param_1,0xffffe500,0xffffef00,*(byte *)(param_1 + 10) >> 4 & 1);
  if (iVar2 == 0) {
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined *)(param_1 + 0xec) = 0;
  }
  else {
    sub_08017700(param_1,0xd01);
    *(undefined *)(param_1 + 0x129) = 2;
    *(undefined *)(param_1 + 0xed) = 1;
    sub_080312DC(param_1);
  }
  return in_lr;
}

