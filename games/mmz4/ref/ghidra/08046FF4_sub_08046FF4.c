// sub_08046FF4 at 0x08046FF4 (thumb)

undefined8 sub_08046FF4(int param_1,undefined param_2)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    *(undefined *)(iVar2 + 9) = 0x1b;
    *(undefined4 *)(iVar2 + 0x14) = 0x804712d;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    puVar3 = (undefined *)(iVar2 + 0x25);
    *puVar3 = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined *)(iVar2 + 0x22) = 1;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar2 + 9) = 0x1b;
      *(undefined4 *)(iVar2 + 0x14) = 0x804712d;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *puVar3 = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      uVar1 = 1;
    }
    else {
      *(undefined *)(iVar2 + 9) = 0x1b;
      *(undefined4 *)(iVar2 + 0x14) = 0x804712d;
      *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
      *puVar3 = 0x10;
      *(undefined2 *)(iVar2 + 0x20) = 0x30;
      uVar1 = 2;
    }
    *(undefined *)(iVar2 + 0x22) = uVar1;
    *(int *)(iVar2 + 0x28) = param_1;
    *(undefined *)(iVar2 + 0x10) = 0;
    *(undefined *)(iVar2 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}

