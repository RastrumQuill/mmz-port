// sub_080208B0 at 0x080208B0 (thumb)

undefined4 sub_080208B0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12a);
  if ((bVar1 & 0x1c) != 0) {
    uVar2 = sub_0801C5CC(param_1);
    sub_0800F664(uVar2);
  }
  if ((bVar1 & 4) == 0) {
    *(undefined *)(param_1 + 0xf) = 1;
    if (((int)*(char *)(param_1 + 299) == 0) || ((bVar1 & 2) == 0)) {
      if ((bVar1 & 0x10) == 0) {
        sub_08018BE8(param_1,0x96);
        goto LAB_08020962;
      }
    }
    else if (-(~(int)*(char *)(param_1 + 299) >> 0x1f) != (*(byte *)(param_1 + 10) >> 4 & 1)) {
      sub_08018BE8(param_1,0x96);
      goto LAB_08020962;
    }
    sub_08018BE8(param_1,0x98);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar3 = sub_0801901C(param_1,0);
    uVar4 = sub_08019068(param_1,0);
    sub_0808BE74(uVar3,uVar4,1);
    *(undefined *)(param_1 + 300) = 0xf0;
    sub_08001EAC(0x19);
  }
LAB_08020962:
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  DAT_02022b64 = DAT_02022b64 & 0xfffe | 0x10;
  return in_lr;
}

