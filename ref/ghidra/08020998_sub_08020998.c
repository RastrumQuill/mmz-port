// sub_08020998 at 0x08020998 (thumb)

undefined4 sub_08020998(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (('\0' < *(char *)(param_1 + 0x71)) && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xf) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar1 = sub_0801901C(param_1,0);
    uVar2 = sub_08019068(param_1,0);
    sub_0808BE74(uVar1,uVar2,1);
    *(undefined *)(param_1 + 300) = 0xf0;
    sub_08001EAC(0x19);
  }
  return in_lr;
}

