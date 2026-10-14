// sub_0806CEA4 at 0x0806CEA4 (thumb)

undefined4 sub_0806CEA4(int param_1)

{
  undefined4 in_lr;
  
  sub_0806CE10(param_1,7,0);
  sub_0806CE10(param_1,7,0);
  sub_0806CE10(param_1,7,0);
  sub_0806CE10(param_1,8,0);
  sub_0806CE10(param_1,8,0);
  sub_0806CE10(param_1,8,0);
  sub_0808827C(2,param_1 + 0x4c);
  sub_08001EAC(2);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  sub_08015698(0,param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

