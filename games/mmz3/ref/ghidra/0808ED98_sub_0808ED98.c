// sub_0808ED98 at 0x0808ED98 (thumb)

undefined4 sub_0808ED98(int param_1,int *param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 4);
  if ((((cVar1 == '\x03') || (cVar1 == '\x0e')) || (cVar1 == '\x0f')) &&
     (iVar3 = *(int *)(param_1 + 0x2c), (*(uint *)(iVar3 + 0x8c) & 0x200) != 0)) {
    if (*(int *)(iVar3 + 0x54) < *param_2) {
      uVar2 = 0xff;
    }
    else {
      uVar2 = 0xfe;
    }
    *(undefined *)(iVar3 + 0xbb) = uVar2;
  }
  return in_lr;
}

