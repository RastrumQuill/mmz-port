// sub_08048350 at 0x08048350 (thumb)

undefined8 sub_08048350(int param_1,int param_2,undefined param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 in_lr;
  
  iVar1 = sub_08005500(DAT_0202ed88);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 0x1f;
    *(undefined4 *)(iVar1 + 0x14) = 0x8048435;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
    puVar4 = (undefined *)(iVar1 + 0x25);
    *puVar4 = 0x10;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    puVar2 = (undefined *)(iVar1 + 0x22);
    *puVar2 = 1;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar1 + 9) = 0x1f;
      *(undefined4 *)(iVar1 + 0x14) = 0x8048435;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *puVar4 = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *puVar2 = 1;
    }
    else {
      *(undefined *)(iVar1 + 9) = 0x1f;
      *(undefined4 *)(iVar1 + 0x14) = 0x8048435;
      *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) & 0xbf;
      *puVar4 = 0x10;
      *(undefined2 *)(iVar1 + 0x20) = 0x30;
      *puVar2 = 2;
    }
    *(int *)(iVar1 + 0x28) = param_1;
    *(int *)(iVar1 + 0x2c) = param_2;
    uVar3 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    *(undefined *)(iVar1 + 0x10) = 1;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar1);
}

