// sub_080CD1D4 at 0x080CD1D4 (thumb)

undefined4 sub_080CD1D4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(int *)(param_1 + 0xb4) == 0) {
      return in_lr;
    }
    DAT_020302f4 = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (DAT_020302f4 == 0) {
    *(undefined *)(*(int *)(param_1 + 0xb4) + 0x119) = 0;
    DAT_020302f4 = 1;
    if (*(char *)(param_1 + 0x10) == '\x02') {
      uVar2 = sub_0801F92C(param_1 + 0x54);
    }
    else {
      uVar2 = sub_08019F68(param_1 + 0x54);
    }
    puVar3 = (undefined4 *)(param_1 + 0xb8);
    *puVar3 = uVar2;
    puVar4 = (undefined4 *)*puVar3;
    if (puVar4 != (undefined4 *)0x0) {
      uVar2 = sub_0800A104(*puVar4,puVar4[1]);
      iVar1 = DAT_0202f5c0;
      *(undefined4 *)(DAT_0202f5c0 + 0x58) = uVar2;
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)*puVar3;
      sub_08025BDC();
      DAT_020301b4 = DAT_020301b4 & 0xfffe;
      DAT_020302a1 = 8;
      DAT_020302aa = 0;
      *(int *)(param_1 + 0xb4) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

