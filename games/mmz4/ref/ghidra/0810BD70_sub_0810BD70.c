// sub_0810BD70 at 0x0810BD70 (thumb)

undefined4 sub_0810BD70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0801CDBC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined *)(param_1 + 0x25) = 0x11;
  *(undefined2 *)(param_1 + 0x74) =
       *(undefined2 *)(&DAT_08869a1e + (uint)*(byte *)(param_1 + 0x11) * 4);
  sub_0801CF00(param_1,*(undefined2 *)(param_1 + 0x74));
  iVar1 = (uint)*(byte *)(param_1 + 0x11) * 8;
  uVar3 = *(undefined4 *)(&DAT_088699d0 + iVar1);
  uVar2 = *(undefined4 *)(&DAT_088699cc + iVar1);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

