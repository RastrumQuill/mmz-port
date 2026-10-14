// sub_0803D9C0 at 0x0803D9C0 (thumb)

undefined8 sub_0803D9C0(int param_1,char param_2,undefined param_3)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0803A970(0x803d979);
  iVar2 = sub_08005500(DAT_0202ed88);
  if (iVar2 != 0) {
    if (param_2 == '\0') {
      if (*(char *)(param_1 + 0xf8) == '\0') {
        *(undefined *)(iVar2 + 9) = 3;
        *(undefined4 *)(iVar2 + 0x14) = 0x803db01;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        uVar1 = 1;
      }
      else {
        *(undefined *)(iVar2 + 9) = 3;
        *(undefined4 *)(iVar2 + 0x14) = 0x803db01;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        uVar1 = 2;
      }
      *(undefined *)(iVar2 + 0x22) = uVar1;
      uVar1 = 0;
    }
    else {
      if (*(char *)(param_1 + 0xf8) == '\x02') {
        *(undefined *)(iVar2 + 9) = 3;
        *(undefined4 *)(iVar2 + 0x14) = 0x803db01;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        uVar1 = 1;
      }
      else {
        *(undefined *)(iVar2 + 9) = 3;
        *(undefined4 *)(iVar2 + 0x14) = 0x803db01;
        *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(undefined2 *)(iVar2 + 0x20) = 0x30;
        uVar1 = 2;
      }
      *(undefined *)(iVar2 + 0x22) = uVar1;
      uVar1 = *(undefined *)(param_1 + 0xc3);
    }
    *(undefined *)(iVar2 + 0x10) = uVar1;
    *(undefined *)(iVar2 + 0x11) = param_3;
    *(int *)(iVar2 + 0xb4) = param_1;
    *(undefined *)(param_1 + 0x154) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}

