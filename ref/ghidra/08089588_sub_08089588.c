// sub_08089588 at 0x08089588 (thumb)

undefined8 sub_08089588(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(short *)(DAT_0202300c + 10) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = sub_08005458(DAT_0202300c);
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x8089651;
    *(ushort *)(iVar1 + 0x1c) = DAT_02023018;
    *(byte *)(iVar1 + 0x1e) = DAT_020230c4;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = param_2;
    iVar1 = sub_08005458(DAT_0202300c);
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x8089651;
    *(ushort *)(iVar1 + 0x1c) = DAT_02023018;
    *(byte *)(iVar1 + 0x1e) = DAT_020230c4;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x20) = param_1;
    *(undefined4 *)(iVar1 + 0x24) = param_2;
    sub_080014E8(&DAT_08500050,(DAT_02023018 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0850005c,(DAT_020230c4 - 5) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

