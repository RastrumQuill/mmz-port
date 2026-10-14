// sub_08045F8C at 0x08045F8C (thumb)

undefined4 sub_08045F8C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) != '\x01') {
    *(undefined *)(param_1 + 0xd1) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x02') {
    *(undefined *)(param_1 + 0x10) = 0;
    uVar2 = 1;
  }
  else {
    if (cVar1 == '\x03') {
      *(undefined *)(param_1 + 0x10) = 0;
      *(undefined *)(param_1 + 0x11) = 2;
      *(undefined *)(param_1 + 0xd1) = 0;
      goto LAB_08045fe2;
    }
    if (cVar1 == '\x04') {
      *(undefined *)(param_1 + 0x10) = 0;
      *(undefined *)(param_1 + 0x11) = 2;
      *(undefined *)(param_1 + 0xd1) = 1;
      goto LAB_08045fe2;
    }
    uVar2 = 0;
  }
  *(undefined *)(param_1 + 0x11) = uVar2;
LAB_08045fe2:
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_0835eedc)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1,1,0);
  sub_0803D3D4(param_1,&DAT_0835ee24,0x60);
  *(undefined4 *)(param_1 + 0x98) = 0x8045eb9;
  iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x54) >> 8,0xf0);
  *(int *)(param_1 + 0xb4) = iVar3 * 0xf000 + -0x800;
  iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x58) >> 8,0xa0);
  iVar3 = (iVar3 + 1) * 0xa000;
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0xb8) = iVar3;
  *(int *)(param_1 + 0x58) = iVar3 + -0x5000;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined *)(param_1 + 0xcc) = 0xff;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined *)(param_1 + 0xcf) = 0;
  *(undefined *)(param_1 + 0xd0) = 0;
  *(undefined *)(param_1 + 0xc6) = 0;
  *(undefined *)(param_1 + 199) = *(undefined *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x11) != '\x02') {
      sub_0800393C(&DAT_085d7d08,(DAT_0202fa78 - 0x360) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7d14,(DAT_0202f878 - 5) * 0x20 + 0x200);
    }
    sub_0800393C(&DAT_085d7cb8,(DAT_0202fa70 - 0x200) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7cc4,(DAT_0202f870 - 4) * 0x20 + 0x200);
    if (*(char *)(param_1 + 0x11) != '\x02') {
      sub_0800393C(&DAT_085d7ccc,(DAT_0202fa72 - 0x220) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7cd8,(DAT_0202f872 - 5) * 0x20 + 0x200);
      sub_0800393C(&DAT_085d7ce0,(DAT_0202fa74 - 0x280) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7cec,(DAT_0202f874 - 7) * 0x20 + 0x200);
      sub_0800393C(&DAT_085d7cf4,(DAT_0202fa76 - 0x2c0) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7d00,(DAT_0202f876 - 9) * 0x20 + 0x200);
    }
    iVar3 = sub_080070D8(DAT_020305e4);
    if (iVar3 != 0) {
      *(undefined *)(iVar3 + 0x25) = 0x18;
      *(undefined *)(iVar3 + 9) = 6;
      *(undefined4 *)(iVar3 + 0x14) = 0x8045f8d;
      *(undefined2 *)(iVar3 + 0x20) = 0;
      *(undefined *)(iVar3 + 0x22) = 0;
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
      *(undefined *)(iVar3 + 0x1d) = *(undefined *)(iVar3 + 0x1c);
      *(undefined *)(iVar3 + 0x10) = 1;
      *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
      *(undefined *)(iVar3 + 0xd1) = *(undefined *)(param_1 + 0xd1);
      *(int *)(iVar3 + 0x28) = param_1;
    }
    *(int *)(param_1 + 0x2c) = iVar3;
  }
  sub_08046278(param_1);
  return in_lr;
}

