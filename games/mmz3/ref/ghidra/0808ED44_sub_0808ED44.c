// sub_0808ED44 at 0x0808ED44 (thumb)

undefined8 sub_0808ED44(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = sub_080253D8(0,param_1,&DAT_08365b80);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      bVar3 = *(byte *)(param_1 + 0x97) & 0xf0;
      if (bVar3 == 0x10) {
        uVar1 = 3;
      }
      else {
        if (bVar3 != 0x30) goto LAB_0808ed8e;
        uVar1 = 5;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0808ed8e:
  return CONCAT44(in_lr,1);
}

