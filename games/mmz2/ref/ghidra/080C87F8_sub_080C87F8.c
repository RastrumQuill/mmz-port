// sub_080C87F8 at 0x080C87F8 (thumb)

undefined4 sub_080C87F8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08002638(&DAT_08432d64,(DAT_0202e59a - 0x210) * 0x20 + 0x10000);
    sub_08002AEC(&DAT_08432d70,(DAT_0202e39a - 5) * 0x20 + 0x200);
    sub_080127E4(param_1,0x509);
    sub_08002D68(4,0x2a0);
    sub_080032EC(0x52);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x25) = 0x1f;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348d40,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08002EA0(4);
  iVar2 = *(int *)(param_1 + 0x54) + 0x300;
  *(int *)(param_1 + 0x54) = iVar2;
  if (DAT_0202ed50 + 0x97ff < iVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08002EF0(4);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

