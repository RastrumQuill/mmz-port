// sub_0808E1A0 at 0x0808E1A0 (thumb)

undefined8 sub_0808E1A0(int param_1,short param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    if (*(char *)(param_1 + 0xd) != '\x04') {
      *(undefined *)(param_1 + 0xd) = 4;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
    if (((param_3 != 0) || (param_4 != 0)) || ((DAT_0202ebbb & 4) == 0)) {
      iVar5 = *(int *)(param_1 + 0x28);
      if ((iVar5 != 0) && (*(char *)(iVar5 + 0xd) == '\x01')) {
        *(undefined4 *)(iVar5 + 0x2c) = 0;
        *(undefined *)(iVar5 + 0xd) = 2;
        *(undefined *)(iVar5 + 0xe) = 0;
      }
      if (*(byte *)(param_1 + 0xe) < 2) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        sub_080128AC(param_1,0x7601,5,1);
        sub_080128D4(param_1);
        *(undefined *)(param_1 + 0xe) = 3;
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffdf6;
        if (*(char *)(param_1 + 0x10) == '\x01') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
          *(undefined *)(param_1 + 0x4c) = 1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        }
        *(undefined4 *)(param_1 + 0x68) = 7;
        *(undefined4 *)(param_1 + 0x60) = 0x150;
      }
    }
    if (param_2 != 0) {
LAB_0808e334:
      uVar4 = 1;
      goto LAB_0808e336;
    }
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x03') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
    bVar1 = sub_0808D78C(param_1,param_3);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
    bVar2 = sub_0808D6FC(param_1,param_4);
    *(int *)(param_1 + 0x5c) = param_3;
    *(int *)(param_1 + 0x60) = param_4;
    if ((((param_3 != 0) || (param_4 != 0)) || ((DAT_0202ebbb & 4) == 0)) &&
       ((iVar5 = *(int *)(param_1 + 0x2c), iVar5 != 0 && (*(byte *)(iVar5 + 0xe) < 2)))) {
      *(undefined4 *)(iVar5 + 0x28) = 0;
      sub_080128AC(iVar5,0x7601,5,1);
      sub_080128D4(iVar5);
      *(undefined *)(iVar5 + 0xe) = 3;
      *(undefined4 *)(iVar5 + 0x5c) = 0xfffffdf6;
      if (*(char *)(iVar5 + 0x10) == '\x01') {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 0x10;
        *(undefined *)(iVar5 + 0x4c) = 1;
        *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) & 0xef | 0x10;
        *(int *)(iVar5 + 0x5c) = -*(int *)(iVar5 + 0x5c);
      }
      *(undefined4 *)(iVar5 + 0x68) = 7;
      *(undefined4 *)(iVar5 + 0x60) = 0x150;
    }
    if ((param_2 != 0) && ((bVar1 | bVar2) == 0)) goto LAB_0808e334;
    uVar3 = 2;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  uVar4 = 0;
LAB_0808e336:
  return CONCAT44(in_lr,uVar4);
}

