// sub_0810BF80 at 0x0810BF80 (thumb)

undefined8 sub_0810BF80(undefined param_1,undefined param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202edb4);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x10;
    *(undefined *)(iVar1 + 9) = 9;
    *(undefined4 *)(iVar1 + 0x14) = 0x810bfed;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(undefined *)(iVar1 + 0x10) = param_1;
    *(undefined *)(iVar1 + 0x11) = param_2;
    *(undefined *)(iVar1 + 0x74) = 0;
    *(undefined *)(iVar1 + 0x75) = 0x16;
    *(undefined2 *)(iVar1 + 0x7a) = 0x100;
    *(undefined2 *)(iVar1 + 0x78) = 0x100;
    *(undefined *)(iVar1 + 0x76) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

