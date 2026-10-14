// sub_080C3024 at 0x080C3024 (thumb)

undefined8 sub_080C3024(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar2 = DAT_02004ca8;
  if ((DAT_02004ca8 & 0x300) == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 3) = 0;
    *(char *)(param_1 + 0x9ee) = *(char *)(param_1 + 0x9ee) == '\0';
    bVar1 = *(byte *)(param_1 + 0x9ec);
    *(byte *)(param_1 + 0x9ed) = bVar1;
    if ((uVar2 & 0x100) == 0) {
      iVar5 = bVar1 + 2;
    }
    else {
      iVar5 = bVar1 + 1;
    }
    uVar3 = sub_080C8B68(iVar5,3);
    *(undefined *)(param_1 + 0x9ec) = uVar3;
    uVar4 = 1;
  }
  return CONCAT44(in_lr,uVar4);
}

