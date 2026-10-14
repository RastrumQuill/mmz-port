// sub_080C88B4 at 0x080C88B4 (thumb)

undefined8
sub_080C88B4(undefined4 param_1,undefined4 param_2,undefined4 param_3,ushort param_4,byte param_5,
            undefined param_6,undefined param_7)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0800710C(DAT_0203062c);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 1;
    *(undefined *)(iVar1 + 9) = 0x4f;
    *(undefined4 *)(iVar1 + 0x14) = 0x80c89fd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(undefined4 *)(iVar1 + 0x74) = param_3;
    *(ushort *)(iVar1 + 0x78) = param_4;
    *(byte *)(iVar1 + 0x7a) = param_5;
    *(undefined *)(iVar1 + 0x7b) = param_6;
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x11) = param_7;
    DAT_0202f9e0 = (ushort)param_5;
    DAT_0202fbe0 = param_4;
    sub_0800393C(&DAT_085d8b18,(param_4 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d8b24,(DAT_0202f9e0 - 4) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

