// sub_080FE220 at 0x080FE220 (thumb)

void sub_080FE220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined2 local_d0;
  
  puVar3 = &local_d0;
  uVar1 = DAT_04000204;
  DAT_04000204 = uVar1 & 0xfffc | 3;
  pcVar4 = sub_080FE1F0;
  for (uVar2 = 0x180000; uVar2 >> 0x10 != 0; uVar2 = ((uVar2 >> 0x10) - 1) * 0x10000) {
    *puVar3 = *(undefined2 *)pcVar4;
    pcVar4 = (code *)((int)pcVar4 + 2);
    puVar3 = puVar3 + 1;
  }
  sub_080FE2C8(param_1,param_2,param_3,(int)&local_d0 + 1);
  return;
}

