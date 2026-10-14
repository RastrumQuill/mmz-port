// sub_080B0990 at 0x080B0990 (thumb)

undefined8 sub_080B0990(uint param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08006B84(DAT_0202f084);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 0x25) = 1;
    *(undefined *)(iVar2 + 9) = 0xf;
    *(undefined4 *)(iVar2 + 0x14) = 0x80b0a29;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_2;
    *(int *)(iVar2 + 100) = *param_3;
    *(int *)(iVar2 + 0x68) = param_3[1];
    *(undefined *)(iVar2 + 0x10) = 1;
    sub_08012580(iVar2);
    sub_080127E4(iVar2,(&DAT_08346914)[param_1 & 0xff]);
    iVar3 = *param_3;
    if (iVar3 < 0) {
      bVar1 = *(byte *)(iVar2 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(iVar2 + 10) & 0xef;
    }
    *(byte *)(iVar2 + 10) = bVar1;
    bVar1 = (byte)((uint)iVar3 >> 0x18);
    *(byte *)(iVar2 + 0x4c) = bVar1 >> 7;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | ((char)bVar1 >> 7) * -0x10;
  }
  return CONCAT44(in_lr,iVar2);
}

